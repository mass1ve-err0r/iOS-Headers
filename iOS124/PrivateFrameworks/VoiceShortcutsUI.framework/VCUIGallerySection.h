//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface VCUIGallerySection : NSObject
{
    NSString *_title;
    NSString *_applicationBundleIdentifier;
    NSArray *_actionDonations;
}

@property(copy, nonatomic) NSArray *actionDonations; // @synthesize actionDonations=_actionDonations;
@property(copy, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 applicationBundleIdentifier:(id)arg2 actionDonations:(id)arg3;

@end

