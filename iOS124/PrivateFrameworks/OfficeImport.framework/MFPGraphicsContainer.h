//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MFPGraphicsState;

__attribute__((visibility("hidden")))
@interface MFPGraphicsContainer : NSObject
{
    MFPGraphicsState *mParentGraphicsState;
    struct CGAffineTransform mContainerTransform;
}

- (struct CGAffineTransform)containerTransform;
- (id)parentGraphicsState;
- (void)dealloc;
- (id)initWithParentGraphicsState:(id)arg1 containerTransform:(struct CGAffineTransform)arg2;

@end

