//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/NSObject-Protocol.h>

@protocol SBUIPowerDownViewDelegate;

@protocol SBUIPowerDownViewInterface <NSObject>
@property(nonatomic) __weak id <SBUIPowerDownViewDelegate> delegate;
- (void)hideAnimated:(_Bool)arg1;
- (void)showAnimated:(_Bool)arg1;
@end

