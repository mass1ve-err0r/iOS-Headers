//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SBApplicationSceneViewStatusBarDescriptor : NSObject
{
    _Bool _forceHidden;
    NSString *_breadcrumbTitle;
    NSString *_breadcrumbSecondaryTitle;
}

+ (id)statusBarDescriptorWithForceHidden:(_Bool)arg1;
@property(copy, nonatomic) NSString *breadcrumbSecondaryTitle; // @synthesize breadcrumbSecondaryTitle=_breadcrumbSecondaryTitle;
@property(copy, nonatomic) NSString *breadcrumbTitle; // @synthesize breadcrumbTitle=_breadcrumbTitle;
@property(nonatomic, getter=isForcedHidden) _Bool forceHidden; // @synthesize forceHidden=_forceHidden;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithForceHidden:(_Bool)arg1;

@end

