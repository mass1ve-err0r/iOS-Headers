//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TemplateKit/NUIContainerViewDelegate-Protocol.h>

@class NUIContainerStackView, UIView;

@protocol NUIContainerStackViewDelegate <NUIContainerViewDelegate>

@optional
- (long long)containerStackView:(NUIContainerStackView *)arg1 alignmentForArrangedSubview:(UIView *)arg2;
- (struct NSDirectionalEdgeInsets)containerStackView:(NUIContainerStackView *)arg1 minimumDirectionalSpacingAdjecentToArrangedSubview:(UIView *)arg2;
- (struct UIEdgeInsets)containerStackView:(NUIContainerStackView *)arg1 minimumSpacingAdjecentToArrangedSubview:(UIView *)arg2;
@end

