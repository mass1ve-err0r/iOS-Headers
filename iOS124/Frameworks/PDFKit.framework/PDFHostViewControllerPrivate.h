//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSExtension, NSMutableArray, NSString, PDFExtensionTopView, PDFPageLabelView, PDFPanGestureRecognizer, PDFPasswordViewController, UILongPressGestureRecognizer, UIScrollView, UITapGestureRecognizer;
@protocol PDFExtensionProtocol, PDFHostViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PDFHostViewControllerPrivate : NSObject
{
    NSExtension *extension;
    id <PDFExtensionProtocol> extensionProxy;
    UIScrollView *hostScrollView;
    id <PDFHostViewControllerDelegate> hostViewControllerDelegate;
    PDFExtensionTopView *topView;
    PDFPasswordViewController *passwordViewController;
    NSString *password;
    PDFPageLabelView *pageLabelView;
    _Bool isUnlocked;
    long long currentPageIndex;
    long long pageCount;
    struct CGSize documentViewSize;
    double minScaleFactor;
    double maxScaleFactor;
    _Bool hasSelection;
    NSMutableArray *selectionRects;
    int textSelectionState;
    struct CGPoint topLeftSelectionPoint;
    struct CGPoint bottomRightSelectionPoint;
    UITapGestureRecognizer *tapGestureRecognizer;
    UITapGestureRecognizer *doubleTapGestureRecognizer;
    UILongPressGestureRecognizer *longPressGestureRecognizer;
    PDFPanGestureRecognizer *panGestureRecognizer;
    struct CGRect boundsInDocument;
    struct CGRect scrollViewFrame;
    struct UIEdgeInsets contentInset;
    struct UIEdgeInsets pdfSafeAreaInsets;
    double horizontalScaleFactor;
    struct CGPoint documentViewCenter;
    _Bool pdfViewIsRotating;
    _Bool pdfViewNeedsUpdate;
    _Bool hostScrollViewObserverIsActive;
}

- (void).cxx_destruct;

@end

