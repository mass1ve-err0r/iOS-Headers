//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSError;

@protocol MobileInstallerDelegateProtocol
- (void)delegateMessageDeliveryCompleteWithError:(NSError *)arg1;
- (void)enumerateAppDictionary:(NSDictionary *)arg1 error:(NSError *)arg2;
- (void)reportProgress:(NSDictionary *)arg1;
@end

