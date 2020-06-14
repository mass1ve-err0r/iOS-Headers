//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, SFCustomFeedback, SFEndSearchFeedback, SFResultEngagementFeedback, SFSearchViewAppearFeedback, SFSearchViewDisappearFeedback, SFStartSearchFeedback, SFSuggestionEngagementFeedback;

@protocol SGQPSearchToShareServerProtocol
- (void)sendCustomFeedback:(SFCustomFeedback *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)didEngageResult:(SFResultEngagementFeedback *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)didEngageSuggestion:(SFSuggestionEngagementFeedback *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)didEndSearch:(SFEndSearchFeedback *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)didStartSearch:(SFStartSearchFeedback *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)searchViewDidDisappear:(SFSearchViewDisappearFeedback *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)searchViewDidAppear:(SFSearchViewAppearFeedback *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)queryPredictionsFeedbackReportForConversation:(NSString *)arg1 completionHandler:(void (^)(NSError *, SGQPFeedbackReport *))arg2;
- (void)queryPredictionsForConversation:(NSString *)arg1 count:(unsigned long long)arg2 completionHandler:(void (^)(NSError *, NSArray *))arg3;
- (void)queryPredictionsForConversation:(NSString *)arg1 limit:(unsigned long long)arg2 completionHandler:(void (^)(NSError *, NSArray *))arg3;
- (void)rankedCategoriesForConversation:(NSString *)arg1 limit:(unsigned long long)arg2 completionHandler:(void (^)(NSError *, NSArray *))arg3;
@end
