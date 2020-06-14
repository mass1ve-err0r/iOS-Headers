//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/NSObject-Protocol.h>

@protocol NUIArrangementItem;

@protocol NUIArrangementContainer <NSObject>
- (struct CGRect)layoutFrameForArrangedSubview:(id <NUIArrangementItem>)arg1 withProposedContentFrame:(struct CGRect)arg2;
- (struct CGSize)contentLayoutSizeFittingSize:(struct CGSize)arg1 forArrangedSubview:(id <NUIArrangementItem>)arg2;

@optional
- (long long)effectiveUserInterfaceLayoutDirection;
- (double)displayScale;
- (_Bool)supportsAsynchronousMeasurement;
@end

