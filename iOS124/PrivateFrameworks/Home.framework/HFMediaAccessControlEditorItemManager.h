//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemManager.h>

@class HFMediaAccessControlEditorItemModule;

@interface HFMediaAccessControlEditorItemManager : HFItemManager
{
    HFMediaAccessControlEditorItemModule *_accessControlEditorItemModule;
}

@property(readonly, nonatomic) HFMediaAccessControlEditorItemModule *accessControlEditorItemModule; // @synthesize accessControlEditorItemModule=_accessControlEditorItemModule;
- (void).cxx_destruct;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)initWithDelegate:(id)arg1 home:(id)arg2;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;

@end

