//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, StoreDownloadQueueResponse;

@interface RestoreDownloadItemsResponse : NSObject
{
    NSArray *_requestItems;
    StoreDownloadQueueResponse *_serverResponse;
}

@property(retain, nonatomic) StoreDownloadQueueResponse *serverResponse; // @synthesize serverResponse=_serverResponse;
@property(copy, nonatomic) NSArray *requestItems; // @synthesize requestItems=_requestItems;
- (void)setServerResponseWithError:(id)arg1;
- (void)dealloc;

@end

