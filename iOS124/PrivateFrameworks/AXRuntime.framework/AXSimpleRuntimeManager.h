//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXSimpleRuntimeManager : NSObject
{
    _Bool _systemWideServer;
    _Bool _started;
    CDUnknownBlockType _parameterizedAttributeCallback;
    CDUnknownBlockType _attributeCallback;
    CDUnknownBlockType _setAttributeCallback;
    CDUnknownBlockType _performActionCallback;
    CDUnknownBlockType _clientObserverCallback;
    CDUnknownBlockType _hitTestCallback;
    CDUnknownBlockType _applicationElementCallback;
    CDUnknownBlockType _outgoingValuePreprocessor;
}

+ (id)sharedManager;
@property(copy, nonatomic) CDUnknownBlockType outgoingValuePreprocessor; // @synthesize outgoingValuePreprocessor=_outgoingValuePreprocessor;
@property(copy, nonatomic) CDUnknownBlockType applicationElementCallback; // @synthesize applicationElementCallback=_applicationElementCallback;
@property(copy, nonatomic) CDUnknownBlockType hitTestCallback; // @synthesize hitTestCallback=_hitTestCallback;
@property(copy, nonatomic) CDUnknownBlockType clientObserverCallback; // @synthesize clientObserverCallback=_clientObserverCallback;
@property(copy, nonatomic) CDUnknownBlockType performActionCallback; // @synthesize performActionCallback=_performActionCallback;
@property(copy, nonatomic) CDUnknownBlockType setAttributeCallback; // @synthesize setAttributeCallback=_setAttributeCallback;
@property(copy, nonatomic) CDUnknownBlockType attributeCallback; // @synthesize attributeCallback=_attributeCallback;
@property(copy, nonatomic) CDUnknownBlockType parameterizedAttributeCallback; // @synthesize parameterizedAttributeCallback=_parameterizedAttributeCallback;
@property(nonatomic) _Bool started; // @synthesize started=_started;
@property(nonatomic) _Bool systemWideServer; // @synthesize systemWideServer=_systemWideServer;
- (void).cxx_destruct;
- (void)start;

@end

