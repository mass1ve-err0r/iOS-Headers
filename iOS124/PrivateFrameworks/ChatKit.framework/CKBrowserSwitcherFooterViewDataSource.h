//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/CKBrowserSwitcherFooterViewDataSource-Protocol.h>

@class NSString;

@interface CKBrowserSwitcherFooterViewDataSource : NSObject <CKBrowserSwitcherFooterViewDataSource>
{
}

- (id)pluginManager;
- (id)switcherView:(id)arg1 indexPathOfModelWithIdentifier:(id)arg2;
- (id)switcherView:(id)arg1 modelAtIndexPath:(id)arg2 type:(long long *)arg3;
- (unsigned long long)numberOfPluginsInSwitcherView:(id)arg1 forSection:(unsigned long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

