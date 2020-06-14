//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/IKStyleableElement-Protocol.h>

@class IKAppDocument, IKChangeSet, IKDOMBindingController, IKDataBinding, IKViewElementStyle, IKViewElementStyleComposer, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSString;
@protocol IKStyleableElement;

@interface IKViewElement : NSObject <IKStyleableElement>
{
    NSArray *_unfilteredChildren;
    NSArray *_visibleChildren;
    _Bool _isPartOfPrototypeElement;
    _Bool _isProxyElement;
    _Bool _disabled;
    _Bool _impressionable;
    _Bool _didUpdateAutoHighlightIdentifier;
    _Bool _areChildrenBound;
    _Bool _prototypesUpdated;
    IKAppDocument *_appDocument;
    IKViewElementStyleComposer *_styleComposer;
    IKViewElementStyle *_style;
    id <IKStyleableElement> _parentStyleableElement;
    NSString *_elementID;
    unsigned long long _elementType;
    NSString *_elementName;
    IKViewElement *_parent;
    NSDictionary *_attributes;
    NSString *_accessibilityText;
    NSString *_autoHighlightIdentifier;
    NSDictionary *_impressionableAttributes;
    unsigned long long _updateType;
    IKChangeSet *_unfilteredChildrenChangeSet;
    NSArray *_features;
    NSDictionary *_dataDictionary;
    NSString *_classSelector;
    NSMutableDictionary *_metadataDict;
    NSMutableSet *_activeSingularEvents;
    NSString *_itmlID;
    IKDataBinding *_binding;
    IKDOMBindingController *_bindingController;
    NSArray *_aliases;
    unsigned long long _implicitUpdateType;
}

+ (unsigned long long)evaluateElementUpdateType:(id)arg1;
+ (unsigned long long)updateTypeForChangeInAttribute:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3;
+ (id)supportedFeatures;
+ (_Bool)shouldParseChildDOMElement:(id)arg1;
+ (_Bool)shouldParseChildDOMElements;
+ (id)effectiveChildDOMElementsForDOMElement:(id)arg1;
+ (void)willParseDOMElement:(id)arg1;
@property(readonly, nonatomic) unsigned long long implicitUpdateType; // @synthesize implicitUpdateType=_implicitUpdateType;
@property(readonly, copy, nonatomic) NSArray *aliases; // @synthesize aliases=_aliases;
@property(readonly, nonatomic) _Bool prototypesUpdated; // @synthesize prototypesUpdated=_prototypesUpdated;
@property(readonly, nonatomic) _Bool areChildrenBound; // @synthesize areChildrenBound=_areChildrenBound;
@property(readonly, nonatomic) IKDOMBindingController *bindingController; // @synthesize bindingController=_bindingController;
@property(readonly, nonatomic) IKDataBinding *binding; // @synthesize binding=_binding;
@property(readonly, retain, nonatomic) NSString *itmlID; // @synthesize itmlID=_itmlID;
@property(retain, nonatomic) NSMutableSet *activeSingularEvents; // @synthesize activeSingularEvents=_activeSingularEvents;
@property(retain, nonatomic) NSMutableDictionary *metadataDict; // @synthesize metadataDict=_metadataDict;
@property(nonatomic) _Bool didUpdateAutoHighlightIdentifier; // @synthesize didUpdateAutoHighlightIdentifier=_didUpdateAutoHighlightIdentifier;
@property(readonly, copy, nonatomic) NSString *classSelector; // @synthesize classSelector=_classSelector;
@property(retain, nonatomic) NSDictionary *dataDictionary; // @synthesize dataDictionary=_dataDictionary;
@property(readonly, copy, nonatomic) NSArray *features; // @synthesize features=_features;
@property(readonly, nonatomic) IKChangeSet *unfilteredChildrenChangeSet; // @synthesize unfilteredChildrenChangeSet=_unfilteredChildrenChangeSet;
@property(nonatomic) unsigned long long updateType; // @synthesize updateType=_updateType;
@property(readonly, nonatomic) NSDictionary *impressionableAttributes; // @synthesize impressionableAttributes=_impressionableAttributes;
@property(nonatomic, getter=isImpressionable) _Bool impressionable; // @synthesize impressionable=_impressionable;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(copy, nonatomic) NSString *autoHighlightIdentifier; // @synthesize autoHighlightIdentifier=_autoHighlightIdentifier;
@property(readonly, copy, nonatomic) NSString *accessibilityText; // @synthesize accessibilityText=_accessibilityText;
@property(readonly, retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(readonly, retain, nonatomic) NSArray *unfilteredChildren; // @synthesize unfilteredChildren=_unfilteredChildren;
@property(nonatomic) __weak IKViewElement *parent; // @synthesize parent=_parent;
@property(readonly, copy, nonatomic) NSString *elementName; // @synthesize elementName=_elementName;
@property(readonly, nonatomic) unsigned long long elementType; // @synthesize elementType=_elementType;
@property(readonly, copy, nonatomic) NSString *elementID; // @synthesize elementID=_elementID;
@property(readonly, nonatomic) _Bool isPartOfPrototypeElement; // @synthesize isPartOfPrototypeElement=_isPartOfPrototypeElement;
@property(retain, nonatomic) IKViewElementStyleComposer *styleComposer; // @synthesize styleComposer=_styleComposer;
- (void).cxx_destruct;
- (_Bool)_elevateToImplicitUpdateType:(unsigned long long)arg1;
- (unsigned long long)_updateSubtreeWithElement:(id)arg1;
- (void)appDocumentDidMarkStylesDirty;
- (void)adoptElement:(id)arg1;
- (void)resetImplicitUpdates;
@property(readonly, nonatomic) __weak id <IKStyleableElement> parentStyleableElement; // @synthesize parentStyleableElement=_parentStyleableElement;
- (void)resetUpdates;
- (void)disperseUpdateType:(unsigned long long)arg1;
- (id)childImageElementWithType:(unsigned long long)arg1;
- (id)childTextElementWithStyle:(unsigned long long)arg1;
- (id)childElementsWithType:(unsigned long long)arg1;
- (id)childElementWithType:(unsigned long long)arg1;
- (_Bool)canProxyUnloadedChildElement:(id)arg1;
- (id)proxyElementForLoadedChildElement:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *children;
@property(readonly, nonatomic, getter=isHidden) _Bool hidden;
@property(readonly, nonatomic) _Bool isProxyElement; // @synthesize isProxyElement=_isProxyElement;
- (void)dispatchEvent:(id)arg1 eventAttribute:(id)arg2 canBubble:(_Bool)arg3 isCancelable:(_Bool)arg4 extraInfo:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)dispatchEventOfType:(unsigned long long)arg1 canBubble:(_Bool)arg2 isCancelable:(_Bool)arg3 extraInfo:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)resetProperty:(unsigned long long)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
@property(nonatomic) __weak IKAppDocument *appDocument; // @synthesize appDocument=_appDocument;
@property(readonly, retain, nonatomic) IKViewElementStyle *style; // @synthesize style=_style;
@property(readonly, copy) NSString *debugDescription;
- (void)updateWithActualElement:(id)arg1;
- (id)applyUpdatesWithElement:(id)arg1;
- (void)configureUpdatesWithElement:(id)arg1;
- (void)dealloc;
- (id)initWithOriginalElement:(id)arg1;
- (id)initWithPrototypeElement:(id)arg1 parent:(id)arg2 appDataItem:(id)arg3;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

