//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/IKJSDataObserving-Protocol.h>

@class IKAppContext, IKDOMElement, IKDataBinding, IKJSDataItem, NSDictionary, NSMutableArray, NSString, _IKDOMMutationRules;
@protocol IKDOMBindingStrategy;

__attribute__((visibility("hidden")))
@interface IKDOMBindingController : NSObject <IKJSDataObserving>
{
    NSDictionary *_bindingKeysByPathString;
    struct {
        _Bool hasKeysAffectingChildren;
        _Bool hasKeysAffectingSubtree;
        _Bool hasPrototypeDependentKeys;
        _Bool hasValueDidChangeForKey;
        _Bool hasDidResolveKeys;
    } _strategyFlags;
    NSMutableArray *_scheduledUpdaters;
    _Bool _shouldResolveData;
    IKAppContext *_appContext;
    IKDOMElement *_domElement;
    IKDOMBindingController *_parent;
    IKDataBinding *_binding;
    IKJSDataItem *_dataItem;
    id <IKDOMBindingStrategy> _strategy;
    _IKDOMMutationRules *_mutationRules;
    NSDictionary *_prototypesByType;
}

+ (id)_prototypesByTypeForDOMElement:(id)arg1;
+ (id)_parsedMutationRulesForDOMElement:(id)arg1;
+ (id)instantiateDOMElementForItem:(id)arg1 withPrototype:(id)arg2 parentDOMElement:(id)arg3 existingDOMElement:(id)arg4;
+ (id)domBindingControllerForDOMElement:(id)arg1;
+ (void)prepareForDOMElement:(id)arg1;
+ (id)parsedBindingForDOMElement:(id)arg1;
@property(readonly, nonatomic) _Bool shouldResolveData; // @synthesize shouldResolveData=_shouldResolveData;
@property(readonly, nonatomic) NSDictionary *prototypesByType; // @synthesize prototypesByType=_prototypesByType;
@property(readonly, nonatomic) _IKDOMMutationRules *mutationRules; // @synthesize mutationRules=_mutationRules;
@property(readonly, nonatomic) id <IKDOMBindingStrategy> strategy; // @synthesize strategy=_strategy;
@property(readonly, nonatomic) __weak IKJSDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(readonly, nonatomic) IKDataBinding *binding; // @synthesize binding=_binding;
@property(readonly, nonatomic) __weak IKDOMBindingController *parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) __weak IKDOMElement *domElement; // @synthesize domElement=_domElement;
@property(readonly, nonatomic) __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
- (void).cxx_destruct;
- (void)_evaluateMutationRules;
- (void)_resolveBinding;
- (_Bool)_canBeReused;
- (void)dataObservable:(id)arg1 didChangePropertyPathWithString:(id)arg2 extraInfo:(id)arg3;
- (id)findPrototypeForType:(id)arg1;
- (void)scheduleUpdateUsingPreUpdate:(CDUnknownBlockType)arg1 update:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithDOMElement:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

