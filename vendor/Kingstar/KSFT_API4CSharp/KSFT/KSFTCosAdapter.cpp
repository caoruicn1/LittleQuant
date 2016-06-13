/////////////////////////////////////////////////////////////////////////
/// ���˴� KSFT C++ ==> .Net Framework Adapter
/// Summary: ����������ӿ��йܸ���
/// Author:	ksftapi@gmail.com
/// Date: 20130314
/// Update List��
///   20130321 �޸�
///   20130326 ���ע��
/////////////////////////////////////////////////////////////////////////

#include "StdAfx.h"

#include "CosSpi.h"
#include "KSFTCosAdapter.h"
#include <memory.h>

using namespace Native;
using namespace KingstarAPI;


KSFTCosAdapter::KSFTCosAdapter(void)
{	
	m_pApi = NULL;
	m_pSpi = new CCosSpi(this);
}

KSFTCosAdapter::~KSFTCosAdapter(void)
{

}

///<summary>
///������¼������
///</summary>
int KSFTCosAdapter::ReqInitInsertConditionalOrder(TKSConditionalOrderInitInsert^ pConditionalOrderInitInsert, int nRequestID)
{
	CKSConditionalOrderInitInsert native;
	MNConv<TKSConditionalOrderInitInsert^, CKSConditionalOrderInitInsert>::M2N(pConditionalOrderInitInsert, &native);
	return m_pApi->ReqInitInsertConditionalOrder(&native, nRequestID);
}

///<summary>
///��������ѯ����
///</summary>
int KSFTCosAdapter::ReqQueryConditionalOrder(TKSConditionalOrderQuery^ pConditionalOrderQuery, int nRequestID)
{
	CKSConditionalOrderQuery native;
	MNConv<TKSConditionalOrderQuery^, CKSConditionalOrderQuery>::M2N(pConditionalOrderQuery, &native);
	return m_pApi->ReqQueryConditionalOrder(&native, nRequestID);
}

///<summary>
///�������޸�����
///</summary>
int KSFTCosAdapter::ReqModifyConditionalOrder(TKSConditionalOrderModify^ pConditionalOrderModify, int nRequestID)
{
	CKSConditionalOrderModify native;
	MNConv<TKSConditionalOrderModify^, CKSConditionalOrderModify>::M2N(pConditionalOrderModify, &native);
	return m_pApi->ReqModifyConditionalOrder(&native, nRequestID);
}

///<summary>
///������ɾ������
///</summary>
int KSFTCosAdapter::ReqRemoveConditionalOrder(TKSConditionalOrderRemove^ pConditionalOrderRemove, int nRequestID)
{
	CKSConditionalOrderRemove native;
	MNConv<TKSConditionalOrderRemove^, CKSConditionalOrderRemove>::M2N(pConditionalOrderRemove, &native);
	return m_pApi->ReqRemoveConditionalOrder(&native, nRequestID);
}

///<summary>
///��ͣ�򼤻�����������
///</summary>
int KSFTCosAdapter::ReqStateAlterConditionalOrder(TKSConditionalOrderStateAlter^ pConditionalOrderStateAlter, int nRequestID)
{
	CKSConditionalOrderStateAlter native;
	MNConv<TKSConditionalOrderStateAlter^, CKSConditionalOrderStateAlter>::M2N(pConditionalOrderStateAlter, &native);
	return m_pApi->ReqStateAlterConditionalOrder(&native, nRequestID);
}

///<summary>
///������ѡ������
///</summary>
int KSFTCosAdapter::ReqSelectConditionalOrder(TKSConditionalOrderSelect^ pConditionalOrderSelect, int nRequestID)
{
	CKSConditionalOrderSelect native;
	MNConv<TKSConditionalOrderSelect^, CKSConditionalOrderSelect>::M2N(pConditionalOrderSelect, &native);
	return m_pApi->ReqSelectConditionalOrder(&native, nRequestID);
}
///<summary>
///ֹ��ֹӯ��¼������
///</summary>
int KSFTCosAdapter::ReqInsertProfitAndLossOrder(TKSProfitAndLossOrderInsert^ pProfitAndLossOrderInsert, int nRequestID)
{
	CKSProfitAndLossOrderInsert native;
	MNConv<TKSProfitAndLossOrderInsert^, CKSProfitAndLossOrderInsert>::M2N(pProfitAndLossOrderInsert, &native);
	return m_pApi->ReqInsertProfitAndLossOrder(&native, nRequestID);
}

///<summary>
///ֹ��ֹӮ���޸�����
///</summary>
int KSFTCosAdapter::ReqModifyProfitAndLossOrder(TKSProfitAndLossOrderModify^ pProfitAndLossOrderModify, int nRequestID)
{
	CKSProfitAndLossOrderModify native;
	MNConv<TKSProfitAndLossOrderModify^, CKSProfitAndLossOrderModify>::M2N(pProfitAndLossOrderModify, &native);
	return m_pApi->ReqModifyProfitAndLossOrder(&native, nRequestID);
}

///<summary>
///ֹ��ֹӮ��ɾ������
///</summary>
int KSFTCosAdapter::ReqRemoveProfitAndLossOrder(TKSProfitAndLossOrderRemove^ pProfitAndLossOrderRemove, int nRequestID)
{
	CKSProfitAndLossOrderRemove native;
	MNConv<TKSProfitAndLossOrderRemove^, CKSProfitAndLossOrderRemove>::M2N(pProfitAndLossOrderRemove, &native);
	return m_pApi->ReqRemoveProfitAndLossOrder(&native, nRequestID);
}

///<summary>
///ֹ��ֹӮ����ѯ����
///</summary>
int KSFTCosAdapter::ReqQueryProfitAndLossOrder(TKSProfitAndLossOrderQuery^ pProfitAndLossOrderQuery, int nRequestID)
{
	CKSProfitAndLossOrderQuery native;
	MNConv<TKSProfitAndLossOrderQuery^, CKSProfitAndLossOrderQuery>::M2N(pProfitAndLossOrderQuery, &native);
	return m_pApi->ReqQueryProfitAndLossOrder(&native, nRequestID);
}
