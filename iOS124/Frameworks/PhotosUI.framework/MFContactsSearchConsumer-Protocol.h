//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSArray, NSNumber;

@protocol MFContactsSearchConsumer <NSObject>

@optional
- (void)finishedSearchingForType:(unsigned long long)arg1;
- (void)consumeSearchResults:(NSArray *)arg1 type:(unsigned long long)arg2 taskID:(NSNumber *)arg3;
- (void)endedNetworkActivity;
- (void)beganNetworkActivity;
- (void)finishedTaskWithID:(NSNumber *)arg1;
- (void)finishedSearchingForCorecipients;
- (void)consumeCorecipientSearchResults:(NSArray *)arg1 taskID:(NSNumber *)arg2;
- (void)finishedSearchingForAutocompleteResults;
- (void)consumeAutocompleteSearchResults:(NSArray *)arg1 taskID:(NSNumber *)arg2;
@end

