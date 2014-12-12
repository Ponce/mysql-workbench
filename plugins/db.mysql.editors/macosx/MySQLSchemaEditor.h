/* 
 * Copyright (c) 2009, 2014, Oracle and/or its affiliates. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; version 2 of the
 * License.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301  USA
 */


#import <Cocoa/Cocoa.h>
#import "WBPluginEditorBase.h"
#import "MTabSwitcher.h"

#include "mysql_schema_editor.h"


// MySQL Schema Editor controller/plugin class. The name of this class must match
// what was declared in ../backend/register_plugin.cpp 
// in schema_editor->moduleFunctionName("DbMysqlSchemaEditor")
// This is the class that will be loaded and instantiated by Workbench
@interface DbMysqlSchemaEditor : WBPluginEditorBase {
  IBOutlet NSTabView *tabView; // this editor has a single Tab, but we put in a TabView for homegeneity
  IBOutlet MTabSwitcher *tabSwitcher;

  IBOutlet NSTextField *nameText;
  IBOutlet NSPopUpButton *collationPopup;

  IBOutlet NSTextView *commentText;

  IBOutlet NSButton *mRefactorButton;

  MySQLSchemaEditorBE *mBackEnd; //!< schema editor backend
  
  BOOL mChanging;
}

- (instancetype)initWithModule: (grt::Module*)module
                    grtManager: (bec::GRTManager*)grtm
                     arguments: (const grt::BaseListRef&)args NS_DESIGNATED_INITIALIZER;


@end
