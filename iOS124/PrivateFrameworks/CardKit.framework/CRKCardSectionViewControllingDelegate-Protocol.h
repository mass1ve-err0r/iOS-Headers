//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CardKit/NSObject-Protocol.h>

@class UIViewController;
@protocol CRCommand, CRKCardSectionViewControlling;

@protocol CRKCardSectionViewControllingDelegate <NSObject>
- (_Bool)performCommand:(id <CRCommand>)arg1 forViewController:(UIViewController<CRKCardSectionViewControlling> *)arg2;
@end

