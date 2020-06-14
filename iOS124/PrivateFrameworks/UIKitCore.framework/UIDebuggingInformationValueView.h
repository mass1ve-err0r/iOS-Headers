//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIDebuggingInformationValue;
@protocol UIDebuggingInformationValueViewObserver;

__attribute__((visibility("hidden")))
@interface UIDebuggingInformationValueView : UIView
{
    id <UIDebuggingInformationValueViewObserver> _valueObserver;
    UIDebuggingInformationValue *_value;
    UIView *_contentView;
}

+ (id)viewWithValue:(id)arg1;
+ (Class)_viewClassForValueType:(long long)arg1;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIDebuggingInformationValue *value; // @synthesize value=_value;
@property(nonatomic) id <UIDebuggingInformationValueViewObserver> valueObserver; // @synthesize valueObserver=_valueObserver;
- (void).cxx_destruct;
- (void)valueChangedToValue:(id)arg1;
- (void)addViewsToContentView;
- (void)_prepareConstraints;
- (id)initWithValue:(id)arg1;

@end

