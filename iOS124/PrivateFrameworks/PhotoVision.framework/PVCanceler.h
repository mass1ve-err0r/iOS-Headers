//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PVCanceler : NSObject
{
    _Bool _canceled;
    CDUnknownBlockType _updateBlock;
}

+ (id)cancelerWithUpdateBlock:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(nonatomic) _Bool canceled; // @synthesize canceled=_canceled;
- (void).cxx_destruct;

@end

