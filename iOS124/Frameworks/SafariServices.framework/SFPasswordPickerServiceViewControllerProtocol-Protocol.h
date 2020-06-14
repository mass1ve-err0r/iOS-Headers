//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSArray, NSString, NSURL;

@protocol SFPasswordPickerServiceViewControllerProtocol <NSObject>
- (void)setAuthenticationGracePeriod:(double)arg1;
- (void)setExternallyVerifiedAndApprovedSharedWebCredentialsDomains:(NSArray *)arg1;
- (void)setRemoteUnlocalizedAppName:(NSString *)arg1;
- (void)setRemoteLocalizedAppName:(NSString *)arg1;
- (void)setRemoteAppID:(NSString *)arg1;
- (void)setWebViewURL:(NSURL *)arg1;
- (void)authenticateToPresentInPopover:(_Bool)arg1 completion:(void (^)(_Bool))arg2;
@end

