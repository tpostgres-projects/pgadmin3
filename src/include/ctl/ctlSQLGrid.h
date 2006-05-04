//////////////////////////////////////////////////////////////////////////
//
// pgAdmin III - PostgreSQL Tools
// RCS-ID:      $Id: ctlSQLResult.h 4881 2006-01-09 09:11:33Z dpage $
// Copyright (C) 2002 - 2006, The pgAdmin Development Team
// This software is released under the Artistic Licence
//
// ctlSQLGrid.h - SQL Data Display Grid
//
//////////////////////////////////////////////////////////////////////////

#ifndef CTLSQLGRID_H
#define CTLSQLGRID_H

// wxWindows headers
#include <wx/grid.h>


class ctlSQLGrid : public wxGrid
{
public:
    ctlSQLGrid(wxWindow *parent, wxWindowID id, const wxPoint& pos, const wxSize& size);

    wxString GetExportLine(int row);
    wxString GetExportLine(int row, wxArrayInt cols);
    wxString GetExportLine(int row, int col1, int col2);
    virtual bool IsColText(int col) { return false; }
    int Copy();

    virtual bool CheckRowPresent(int row) { return true; }
    wxSize ctlSQLGrid::GetBestSize(int row, int col);
    void ctlSQLGrid::OnLabelDoubleClick(wxGridEvent& event);
};

#endif