//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol SGQPSearchToShareInternalToolServerProtocol
- (void)assetInfoWithCompletion:(void (^)(NSError *, NSDictionary *))arg1;
- (void)addMessageToConversation:(NSString *)arg1 withContent:(NSString *)arg2 isSent:(_Bool)arg3 completionHandler:(void (^)(NSError *))arg4;
@end

