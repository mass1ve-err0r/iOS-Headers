//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSAttributedString, NSString, UIBezierPath;

@interface NSObject (UIAccessibility)
@property(copy, nonatomic) NSArray *accessibilityHeaderElements;
@property(nonatomic) long long accessibilityNavigationStyle;
@property(nonatomic) _Bool shouldGroupAccessibilityChildren; // @dynamic shouldGroupAccessibilityChildren;
@property(retain, nonatomic) NSString *accessibilityLanguage; // @dynamic accessibilityLanguage;
- (void)setAccessibilityContainer:(id)arg1;
@property(nonatomic) _Bool isAccessibilityElement; // @dynamic isAccessibilityElement;
@property(nonatomic) unsigned long long accessibilityTraits; // @dynamic accessibilityTraits;
@property(nonatomic) struct CGPoint accessibilityActivationPoint; // @dynamic accessibilityActivationPoint;
@property(copy, nonatomic) UIBezierPath *accessibilityPath;
@property(nonatomic) struct CGRect accessibilityFrame; // @dynamic accessibilityFrame;
@property(copy, nonatomic) NSAttributedString *accessibilityAttributedHint;
@property(copy, nonatomic) NSString *accessibilityHint; // @dynamic accessibilityHint;
- (void)_internalSetAccessibilityAttributedHint:(id)arg1;
@property(copy, nonatomic) NSAttributedString *accessibilityAttributedValue;
@property(copy, nonatomic) NSString *accessibilityValue; // @dynamic accessibilityValue;
- (void)_internalSetAccessibilityAttributedValue:(id)arg1;
@property(copy, nonatomic) NSAttributedString *accessibilityAttributedLabel;
@property(copy, nonatomic) NSString *accessibilityLabel; // @dynamic accessibilityLabel;
- (void)_internalSetAccessibilityAttributedLabel:(id)arg1;
@property(nonatomic) _Bool accessibilityViewIsModal; // @dynamic accessibilityViewIsModal;
@property(nonatomic) _Bool accessibilityElementsHidden; // @dynamic accessibilityElementsHidden;
- (id)storedAccessibilityActivationPoint;
- (id)storedAccessibilityFrame;
- (id)storedIsAccessibilityElement;
- (id)storedAccessibilityTraits;
- (id)storedAccessibilityViewIsModal;
- (id)storedAccessibilityElementsHidden;
- (id)storedAccessibilityNavigationStyle;
- (id)storedShouldGroupAccessibilityChildren;
- (id)accessibilityContainer;
- (id)_internalAccessibilityAttributedHint;
- (id)_internalAccessibilityAttributedValue;
- (id)_internalAccessibilityAttributedLabel;
@end

