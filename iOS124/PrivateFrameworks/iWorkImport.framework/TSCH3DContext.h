//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface TSCH3DContext : NSObject <NSCopying>
{
    struct FramebufferAttributes mCurrentFramebufferAttributes;
}

- (id).cxx_construct;
- (id)sharedContext;
@property(readonly, nonatomic) NSSet *childrenContexts;
- (void)setCurrentFramebufferAttributes:(const struct FramebufferAttributes *)arg1;
- (const struct FramebufferAttributes *)currentFramebufferAttributes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;

@end

