//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DoNotDisturbServer/NSObject-Protocol.h>

@class DNDSSyncSettings, DNDSSyncSettingsProvider;

@protocol DNDSSyncSettingsProviderDelegate <NSObject>
- (void)syncSettingsProvider:(DNDSSyncSettingsProvider *)arg1 didReceiveUpdatedSyncSettings:(DNDSSyncSettings *)arg2;
@end

