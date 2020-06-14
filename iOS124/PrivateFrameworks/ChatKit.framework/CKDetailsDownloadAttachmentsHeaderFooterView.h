//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

#import <ChatKit/CKDetailsHeaderFooterView-Protocol.h>

@class NSLayoutConstraint, NSString, UIColor, UIImageView, UITextView;
@protocol CKDetailsDownloadAttachmentsHeaderFooterViewDelegate;

@interface CKDetailsDownloadAttachmentsHeaderFooterView : UITableViewHeaderFooterView <CKDetailsHeaderFooterView>
{
    _Bool _logoHidden;
    NSString *_titleText;
    NSString *_buttonText;
    id <CKDetailsDownloadAttachmentsHeaderFooterViewDelegate> _delegate;
    UIColor *_downloadButtonTextColor;
    UIColor *_titleTextColor;
    UIImageView *_iCloudImageView;
    UITextView *_titleTextView;
    UITextView *_buttonTextView;
    NSLayoutConstraint *_titleTextTopToLogoConstraint;
    NSLayoutConstraint *_titleTextTopToViewConstraint;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) NSLayoutConstraint *titleTextTopToViewConstraint; // @synthesize titleTextTopToViewConstraint=_titleTextTopToViewConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleTextTopToLogoConstraint; // @synthesize titleTextTopToLogoConstraint=_titleTextTopToLogoConstraint;
@property(retain, nonatomic) UITextView *buttonTextView; // @synthesize buttonTextView=_buttonTextView;
@property(retain, nonatomic) UITextView *titleTextView; // @synthesize titleTextView=_titleTextView;
@property(retain, nonatomic) UIImageView *iCloudImageView; // @synthesize iCloudImageView=_iCloudImageView;
@property(nonatomic) _Bool logoHidden; // @synthesize logoHidden=_logoHidden;
@property(retain, nonatomic) UIColor *titleTextColor; // @synthesize titleTextColor=_titleTextColor;
@property(retain, nonatomic) UIColor *downloadButtonTextColor; // @synthesize downloadButtonTextColor=_downloadButtonTextColor;
@property(nonatomic) __weak id <CKDetailsDownloadAttachmentsHeaderFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void).cxx_destruct;
- (void)handleUserTap:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

