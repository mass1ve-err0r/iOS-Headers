/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSHistoryURLCompletionSession : NSObject <WBSURLCompletionSessionProtocol> {
    WBSHistoryService * _historyService;
}

- (void).cxx_destruct;
- (void)getBestMatchesForTypedString:(id)arg1 limit:(unsigned long long)arg2 forQueryID:(long long)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithHistoryService:(id)arg1;

@end
