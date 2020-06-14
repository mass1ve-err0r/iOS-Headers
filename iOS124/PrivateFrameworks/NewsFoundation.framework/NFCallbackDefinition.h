//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NFDefinitionContainer;

@interface NFCallbackDefinition : NSObject
{
    CDUnknownBlockType _callbackBlock;
    id <NFDefinitionContainer> _privateContainer;
}

@property(readonly, nonatomic) id <NFDefinitionContainer> privateContainer; // @synthesize privateContainer=_privateContainer;
@property(readonly, nonatomic) CDUnknownBlockType callbackBlock; // @synthesize callbackBlock=_callbackBlock;
- (void).cxx_destruct;
- (id)initWithCallbackBlock:(CDUnknownBlockType)arg1 privateContainer:(id)arg2;

@end

