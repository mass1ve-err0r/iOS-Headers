//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iAd/NSCopying-Protocol.h>

@interface ADLayoutOptions : NSObject <NSCopying>
{
    struct CGSize _containerSize;
    struct CGSize _reorientedContainerSize;
}

@property(nonatomic) struct CGSize reorientedContainerSize; // @synthesize reorientedContainerSize=_reorientedContainerSize;
@property(nonatomic) struct CGSize containerSize; // @synthesize containerSize=_containerSize;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

