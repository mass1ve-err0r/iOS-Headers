//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class PHContentEditingOutput, PUEditPluginHostViewController;

@protocol PUEditPluginHostViewControllerDataSource
- (void)editPluginHostViewController:(PUEditPluginHostViewController *)arg1 commitContentEditingOutput:(PHContentEditingOutput *)arg2 withCompletionHandler:(void (^)(NSError *))arg3;
- (void)editPluginHostViewController:(PUEditPluginHostViewController *)arg1 loadItemProviderWithHandler:(void (^)(NSItemProvider *))arg2;
@end

