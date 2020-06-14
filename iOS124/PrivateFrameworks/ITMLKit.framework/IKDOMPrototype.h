//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IKDOMElement, NSString, _IKDOMPrototypeDerivationRules;

@interface IKDOMPrototype : NSObject
{
    IKDOMElement *_domElement;
    NSString *_identifier;
    NSString *_type;
    NSString *_selector;
    _IKDOMPrototypeDerivationRules *_rules;
}

+ (id)prototypeWithDOMElement:(id)arg1;
@property(readonly, copy, nonatomic) _IKDOMPrototypeDerivationRules *rules; // @synthesize rules=_rules;
@property(readonly, copy, nonatomic) NSString *selector; // @synthesize selector=_selector;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) __weak IKDOMElement *domElement; // @synthesize domElement=_domElement;
- (void).cxx_destruct;
- (id)_derivativeWithDataItem:(id)arg1;
- (id)instantiateDOMElement;
- (id)variantForDataItem:(id)arg1;
- (id)initWithDOMElement:(id)arg1 selector:(id)arg2;

@end

