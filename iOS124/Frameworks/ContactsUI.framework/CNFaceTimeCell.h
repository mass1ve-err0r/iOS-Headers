//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNLabeledCell.h>

#import <ContactsUI/CNActionViewDelegate-Protocol.h>

@class CNActionView, CNUIUserActionListDataSource, NSString, UILabel;
@protocol CNPropertyCellDelegate;

__attribute__((visibility("hidden")))
@interface CNFaceTimeCell : CNLabeledCell <CNActionViewDelegate>
{
    _Bool _isFaceTimeAudioAvailable;
    CNUIUserActionListDataSource *_actionsDataSource;
    id <CNPropertyCellDelegate> _delegate;
    UILabel *_faceTimeLabel;
    CNActionView *_actionView1;
    CNActionView *_actionView2;
}

@property(readonly, nonatomic) CNActionView *actionView2; // @synthesize actionView2=_actionView2;
@property(readonly, nonatomic) CNActionView *actionView1; // @synthesize actionView1=_actionView1;
@property(nonatomic) _Bool isFaceTimeAudioAvailable; // @synthesize isFaceTimeAudioAvailable=_isFaceTimeAudioAvailable;
@property(readonly, nonatomic) UILabel *faceTimeLabel; // @synthesize faceTimeLabel=_faceTimeLabel;
@property(nonatomic) __weak id <CNPropertyCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CNUIUserActionListDataSource *actionsDataSource; // @synthesize actionsDataSource=_actionsDataSource;
- (void).cxx_destruct;
- (void)didPressActionView:(id)arg1 longPress:(_Bool)arg2;
- (void)tintColorDidChange;
- (id)variableConstraints;
- (id)constantConstraints;
- (id)rightMostView;
- (double)minCellHeight;
- (void)performDefaultAction;
- (id)labelView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

