//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _IKDOMBindingControllerUpdateRecord : NSObject
{
    _Bool _cancelled;
    CDUnknownBlockType _preUpdate;
    CDUnknownBlockType _update;
}

@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(copy, nonatomic) CDUnknownBlockType update; // @synthesize update=_update;
@property(copy, nonatomic) CDUnknownBlockType preUpdate; // @synthesize preUpdate=_preUpdate;
- (void).cxx_destruct;

@end

