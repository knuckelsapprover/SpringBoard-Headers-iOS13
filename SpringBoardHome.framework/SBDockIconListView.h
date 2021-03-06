/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBDockIconListView : SBIconListView {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _layoutInsets;
    long long  _layoutStyle;
    unsigned long long  _minimumNumberOfIconsToDistributeEvenlyToEdges;
    double  _spacing;
    bool  _vertical;
}

@property (nonatomic, readonly) double effectiveSpacing;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } layoutInsets;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) unsigned long long minimumNumberOfIconsToDistributeEvenlyToEdges;
@property (nonatomic) double spacing;
@property (getter=isVertical, nonatomic) bool vertical;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })defaultFrameForOrientation:(long long)arg1;
+ (double)defaultHeight;
+ (unsigned long long)defaultIconViewConfigurationOptions;

- (double)_additionalHorizontalInsetToCenterIcons;
- (double)_additionalVerticalInsetToCenterIcons;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (bool)adaptsOrientationToTraitCollection;
- (bool)allowsAddingIconCount:(unsigned long long)arg1;
- (bool)automaticallyAdjustsLayoutMetricsToFit;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForLayout;
- (void)didAddIconView:(id)arg1;
- (double)effectiveSpacing;
- (double)effectiveSpacingForNumberOfIcons:(unsigned long long)arg1;
- (id)iconAtPoint:(struct CGPoint { double x1; double x2; })arg1 index:(unsigned long long*)arg2 proposedOrder:(long long*)arg3;
- (id)initWithModel:(id)arg1 layoutProvider:(id)arg2 iconLocation:(id)arg3 orientation:(long long)arg4 iconViewProvider:(id)arg5;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isVertical;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutInsets;
- (long long)layoutStyle;
- (unsigned long long)minimumNumberOfIconsToDistributeEvenlyToEdges;
- (struct CGPoint { double x1; double x2; })originForIconAtCoordinate:(struct SBIconCoordinate { long long x1; long long x2; })arg1 metrics:(const struct SBIconListLayoutMetrics { unsigned long long x1; unsigned long long x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; double x5; struct UIEdgeInsets { double x_6_1_1; double x_6_1_2; double x_6_1_3; double x_6_1_4; } x6; bool x7; bool x8; }*)arg2;
- (struct CGPoint { double x1; double x2; })originForIconAtCoordinate:(struct SBIconCoordinate { long long x1; long long x2; })arg1 numberOfIcons:(unsigned long long)arg2;
- (struct CGSize { double x1; double x2; })scaledAlignmentIconSize;
- (void)setLayoutInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLayoutStyle:(long long)arg1;
- (void)setMinimumNumberOfIconsToDistributeEvenlyToEdges:(unsigned long long)arg1;
- (void)setSpacing:(double)arg1;
- (void)setVertical:(bool)arg1;
- (double)spacing;

@end
