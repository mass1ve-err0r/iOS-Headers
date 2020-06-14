//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

#import <UIKitCore/UIDebuggingInformationViewController-Protocol.h>
#import <UIKitCore/UIDebuggingZoomDelegate-Protocol.h>

@class NSObject, UIDebuggingZoomLineView, UIDebuggingZoomLoupeView, UILabel, UIPanGestureRecognizer, UISegmentedControl, UIView;
@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface UIDebuggingZoomViewController : UIViewController <UIDebuggingZoomDelegate, UIDebuggingInformationViewController>
{
    _Bool _useViewForEdges;
    unsigned long long _currentDirection;
    UIDebuggingZoomLoupeView *_loupe;
    UIDebuggingZoomLineView *_lineView;
    UIPanGestureRecognizer *_pan;
    NSObject<OS_dispatch_group> *_group;
    NSObject<OS_dispatch_queue> *_queue;
    struct CGImage *_image;
    UILabel *_label;
    UILabel *_distanceLabel;
    UISegmentedControl *_directionSegmentedControl;
    UIView *_lastViewSeen;
}

@property(retain, nonatomic) UIView *lastViewSeen; // @synthesize lastViewSeen=_lastViewSeen;
@property(nonatomic) _Bool useViewForEdges; // @synthesize useViewForEdges=_useViewForEdges;
@property(retain, nonatomic) UISegmentedControl *directionSegmentedControl; // @synthesize directionSegmentedControl=_directionSegmentedControl;
@property(retain, nonatomic) UILabel *distanceLabel; // @synthesize distanceLabel=_distanceLabel;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) struct CGImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
@property(retain, nonatomic) UIPanGestureRecognizer *pan; // @synthesize pan=_pan;
@property(retain, nonatomic) UIDebuggingZoomLineView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIDebuggingZoomLoupeView *loupe; // @synthesize loupe=_loupe;
@property(nonatomic) unsigned long long currentDirection; // @synthesize currentDirection=_currentDirection;
- (void).cxx_destruct;
- (struct CGImage *)newCaptureSnapshotAtRect:(struct CGRect)arg1 window:(id)arg2;
- (void)dealloc;
- (id)drawViewLinesAtPoint:(struct CGPoint)arg1 forView:(id)arg2;
- (id)drawLinesAtPoint:(struct CGPoint)arg1;
- (void)toggleMeasuring:(id)arg1;
- (void)updateGesture:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)toggleDirection:(id)arg1;
- (void)toggleMode:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

