//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNPropertySimpleTransportCell.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CNPropertyIntentActionableCell : CNPropertySimpleTransportCell
{
    NSArray *_actions;
}

@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (void).cxx_destruct;
- (void)transportButton3Clicked:(id)arg1;
- (void)transportButton2Clicked:(id)arg1;
- (void)transportButton1Clicked:(id)arg1;
- (id)transportsMapping;
- (void)updateTransportButtons;
- (void)performDefaultAction;
- (_Bool)shouldPerformDefaultAction;
- (id)defaultContext;

@end

