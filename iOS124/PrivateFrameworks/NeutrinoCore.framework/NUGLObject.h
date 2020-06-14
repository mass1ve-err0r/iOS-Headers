//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NUGLObjectPool;

@interface NUGLObject : NSObject
{
    unsigned int _identifier;
    NUGLObjectPool *_objectPool;
}

@property(retain, nonatomic) NUGLObjectPool *objectPool; // @synthesize objectPool=_objectPool;
@property(nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)resetGLObject;
- (id)description;
- (void)dealloc;
- (void)delete;
- (void)generate:(id)arg1;
- (void)ensure:(id)arg1;
@property(readonly, nonatomic) _Bool exists;

@end

