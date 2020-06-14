//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/NSHTTPCookieStorage.h>

@interface NSHTTPCookieStorage (WebUIExtras)
@property(readonly) _Bool webui_trackerProtectionEnabled;
- (void)webui_applySafariCookieAcceptPolicy;
- (id)webui_safariCookieAcceptPolicy;
@property(readonly) unsigned long long webui_safariCookieAcceptPolicyEnumValue;
- (float)_safariCookieAcceptPolicyFloatValue;
@end

