//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/NSObject-Protocol.h>

@class HKObjectAuthorizationPromptSession;

@protocol _HKDocumentPickerPresentationController <NSObject>
- (void)cancelPresentation;
- (void)presentWithSession:(HKObjectAuthorizationPromptSession *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
@end

