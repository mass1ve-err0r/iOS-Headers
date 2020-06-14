//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreMediaStream/NSObject-Protocol.h>

@class NSArray;
@protocol MSDeleterDelegate;

@protocol MSDeleter <NSObject>
@property(nonatomic) id <MSDeleterDelegate> delegate;
- (void)performOutstandingActivities;
- (void)stop;
- (void)abort;
- (void)deleteAssetCollections:(NSArray *)arg1;
@end

