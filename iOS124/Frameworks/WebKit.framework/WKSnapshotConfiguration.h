//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/NSCopying-Protocol.h>

@class NSNumber;

@interface WKSnapshotConfiguration : NSObject <NSCopying>
{
    NSNumber *_snapshotWidth;
    struct CGRect _rect;
}

@property(copy, nonatomic) NSNumber *snapshotWidth; // @synthesize snapshotWidth=_snapshotWidth;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

