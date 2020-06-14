//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSError, PLPublishingAgent;

@protocol PLPublishingAgentDelegate
- (void)publishingAgentDidEndPublishing:(PLPublishingAgent *)arg1 error:(NSError *)arg2;
- (void)publishingAgentDidBeginPublishing:(PLPublishingAgent *)arg1;
- (void)publishingAgentCancelButtonClicked:(PLPublishingAgent *)arg1;
- (void)publishingAgentDoneButtonClicked:(PLPublishingAgent *)arg1;
- (void)publishingAgentWillBeDisplayed:(PLPublishingAgent *)arg1;

@optional
- (void)publishingAgentDidEndRemaking:(PLPublishingAgent *)arg1 didSucceed:(_Bool)arg2;
- (void)publishingAgentDidStartRemaking:(PLPublishingAgent *)arg1;
@end

