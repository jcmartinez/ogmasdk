#pragma once

class CdemomfcDlg : public CDialog
{
	HOgmacam			m_hcam;
	void*				m_pImageData;
	BITMAPINFOHEADER	m_header;
public:
	CdemomfcDlg(CWnd* pParent = NULL);

	enum { IDD = IDD_DEMOMFC };

protected:
	virtual BOOL OnInitDialog();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnCbnSelchangeCombo1();
	afx_msg void OnSnapResolution(UINT nID);
	afx_msg void OnBnClickedCheck1();
	afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg void OnDestroy();
	afx_msg LRESULT OnMsgCamevent(WPARAM wp, LPARAM lp);
private:
	void StartDevice();
	void OnEventError();
	void OnEventDisconnected();
	void OnEventImage();
	void OnEventExpo();
	void OnEventTempTint();
	void OnEventStillImage();
};
