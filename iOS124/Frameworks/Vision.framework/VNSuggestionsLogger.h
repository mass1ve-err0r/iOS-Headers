//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNClusteringLogger.h>

__attribute__((visibility("hidden")))
@interface VNSuggestionsLogger : VNClusteringLogger
{
}

- (void)logString:(id)arg1;
- (void)logFinalSuggestionsList:(id)arg1;
- (void)logConnectedGroups:(id)arg1;
- (void)logFilteredByInputQuerySuggestons:(id)arg1;
- (void)logAllSuggestons:(id)arg1;
- (void)logSuggestons:(id)arg1 description:(id)arg2;
- (void)logInputFaceIdsWithFlags:(id)arg1;
- (id)initWithOptions:(id)arg1 logEnabled:(_Bool)arg2;

@end

