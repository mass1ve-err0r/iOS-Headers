//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSString, RTIDocumentState, RTIDocumentTraits, RTIInputSystemSession;

@protocol RTIInputSystemSessionDelegate <NSObject>

@optional
- (void)inputSession:(RTIInputSystemSession *)arg1 didChangePause:(_Bool)arg2 withReason:(NSString *)arg3;
- (void)inputSession:(RTIInputSystemSession *)arg1 documentStateDidChange:(RTIDocumentState *)arg2;
- (void)inputSession:(RTIInputSystemSession *)arg1 documentTraitsDidChange:(RTIDocumentTraits *)arg2;
- (void)inputSessionDidDie:(RTIInputSystemSession *)arg1;
- (void)inputSessionDidEnd:(RTIInputSystemSession *)arg1;
- (void)inputSessionDidBegin:(RTIInputSystemSession *)arg1;
@end

