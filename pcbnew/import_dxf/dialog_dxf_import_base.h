///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct  8 2012)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __DIALOG_DXF_IMPORT_BASE_H__
#define __DIALOG_DXF_IMPORT_BASE_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
class DIALOG_SHIM;
class PCB_LAYER_BOX_SELECTOR;

#include "dialog_shim.h"
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/radiobox.h>
#include <wx/bmpcbox.h>
#include <wx/statline.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class DIALOG_DXF_IMPORT_BASE
///////////////////////////////////////////////////////////////////////////////
class DIALOG_DXF_IMPORT_BASE : public DIALOG_SHIM
{
	private:
	
	protected:
		wxStaticText* m_staticText37;
		wxTextCtrl* m_textCtrlFileName;
		wxButton* m_buttonBrowse;
		wxRadioBox* m_rbOffsetOption;
		wxStaticText* m_staticTextBrdlayer;
		PCB_LAYER_BOX_SELECTOR* m_SelLayerBox;
		wxStaticLine* m_staticline8;
		wxStdDialogButtonSizer* m_sdbSizer1;
		wxButton* m_sdbSizer1OK;
		wxButton* m_sdbSizer1Cancel;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnBrowseDxfFiles( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnCancelClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnOKClick( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		DIALOG_DXF_IMPORT_BASE( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Import DXF file"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 356,273 ), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER ); 
		~DIALOG_DXF_IMPORT_BASE();
	
};

#endif //__DIALOG_DXF_IMPORT_BASE_H__
