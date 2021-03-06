#ifndef __uddestructordialog__
#define __uddestructordialog__

#include "GUI.h"
#include "projectbase/codegen/Language.h"
#include "projectbase/ProjectBase.h"
#include "../DiagUml.h"

class udDestructorDialog : public _DestructorDialog
{

public:
	udDestructorDialog(wxWindow *parent, udLanguage *lang);
	virtual ~udDestructorDialog();
	
	// member data accessors
	void SetCode(const wxString& Code) {this->m_Code = Code;}
	void SetDescription(const wxString& Description) {this->m_Description = Description;}
	void SetCodeName(const wxString& Name) {this->m_Name = Name;}
	void SetFcnModifier(const udLanguage::FCNMODIFIER& FcnModifier) {this->m_FcnModifier = FcnModifier;}
	void SetImplementation(const wxString& Implementation) {this->m_Implementation = Implementation;}
	
	const wxString& GetImplementation() const {return m_Implementation;}
	const wxString& GetCode() const {return m_Code;}
	const wxString& GetDescription() const {return m_Description;}
	const wxString& GetCodeName() const {return m_Name;}
	const udLanguage::FCNMODIFIER& GetFcnModifier() const {return m_FcnModifier;}
	
protected:
	// protected data members
	wxString m_Name;
	wxString m_Description;
	wxString m_Code;
	wxString m_Implementation;
	udLanguage::FCNMODIFIER m_FcnModifier;
	
	udLanguage *m_pLang;
	
	// protected virtual functions
	virtual void OnInit(wxInitDialogEvent &event);
	virtual void OnNameChange(wxCommandEvent &event);
	virtual void OnMakeValid( wxCommandEvent &event );
	virtual void OnOk( wxCommandEvent& event );
	virtual void OnCancel( wxCommandEvent& event );
};

#endif // __uddestructordialog__
