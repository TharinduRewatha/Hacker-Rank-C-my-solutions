//Tharindu Rewatha
struct WorkShop {
    int iStartTime, iDuration, iEndTime;
};
struct Available_Workshops {
    int iWorkShopCnt;     
    vector<WorkShop> vWorkShops;  
};

Available_Workshops* initialize(int p_pStartTime[], int p_pDuration[], int n) {
    Available_Workshops* pAW = new Available_Workshops;
    pAW->iWorkShopCnt = n;

    for(int i = 0; i < n; ++i) {
        WorkShop tWorkShop;
        tWorkShop.iStartTime = p_pStartTime[i];
        tWorkShop.iDuration = p_pDuration[i];
        tWorkShop.iEndTime = p_pStartTime[i] + p_pDuration[i];
        pAW->vWorkShops.push_back(tWorkShop);
    }
    return pAW;
}

int CalculateMaxWorkshops(Available_Workshops* p_pAvWS) {

    std::sort(p_pAvWS->vWorkShops.begin(), p_pAvWS->vWorkShops.end(), [](WorkShop A, WorkShop B) {
        return A.iEndTime < B.iEndTime;
    });
    int iRet = 0, iCurrEndTime = 0;
    for(int i = 0; i < p_pAvWS->iWorkShopCnt; ++i) {
        if ( p_pAvWS->vWorkShops[i].iStartTime >= iCurrEndTime ) {
            iRet++;
            iCurrEndTime = p_pAvWS->vWorkShops[i].iEndTime;
        }
    }
    return iRet;
}
//Seekthefreak
