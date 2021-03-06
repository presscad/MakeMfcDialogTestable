
// SampleAppDlg.h : ヘッダー ファイル
//

#pragma once
#include "UiLogic.h"
#include "afxwin.h"

// CSampleAppDlg ダイアログ
class CSampleAppDlg : public CDialogEx
{
	UiLogic<CListBox, CEdit> m_logic;

// コンストラクション
public:
	CSampleAppDlg(CWnd* pParent = NULL);	// 標準コンストラクター

// ダイアログ データ
	enum { IDD = IDD_SAMPLEAPP_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV サポート


// 実装
protected:
	HICON m_hIcon;

	// 生成された、メッセージ割り当て関数
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnAdd();
private:
	CEdit m_edt_item;
	CListBox m_lst_items;
};
