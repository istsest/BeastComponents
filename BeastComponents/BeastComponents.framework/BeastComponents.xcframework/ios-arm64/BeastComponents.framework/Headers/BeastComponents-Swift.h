// Generated by Apple Swift version 5.3 (swiftlang-1200.0.29.2 clang-1200.0.30.1)
#ifndef BEASTCOMPONENTS_SWIFT_H
#define BEASTCOMPONENTS_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="BeastComponents",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class NSCoder;

SWIFT_CLASS("_TtC15BeastComponents16BCArrowAlertView")
@interface BCArrowAlertView : UILabel
@property (nonatomic) NSInteger arrowHeadDepth SWIFT_DEPRECATED_OBJC("Swift property 'BCArrowAlertView.arrowHeadDepth' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic) float animationSpeed SWIFT_DEPRECATED_OBJC("Swift property 'BCArrowAlertView.animationSpeed' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)drawRect:(CGRect)rect;
- (void)layoutSubviews;
@end

@class UIImageView;
@class UIBezierPath;

/// Buubble Cell View
SWIFT_CLASS("_TtC15BeastComponents16BCBubbleCellView")
@interface BCBubbleCellView : UIView
/// Title string for bubble cell
@property (nonatomic, copy) NSString * _Nullable title SWIFT_DEPRECATED_OBJC("Swift property 'BCBubbleCellView.title' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// Weight for cell
/// The default is 0.0.
@property (nonatomic) double weight SWIFT_DEPRECATED_OBJC("Swift property 'BCBubbleCellView.weight' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// Detail test string for bubble cell
@property (nonatomic, copy) NSString * _Nullable detailText SWIFT_DEPRECATED_OBJC("Swift property 'BCBubbleCellView.detailText' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// Background image view on bubble cell.
@property (nonatomic, readonly, strong) UIImageView * _Nonnull backgroundImageView SWIFT_DEPRECATED_OBJC("Swift property 'BCBubbleCellView.backgroundImageView' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// Title label on bubble cell. If cell’s style does not have title label style, it has nil.
@property (nonatomic, readonly, strong) UILabel * _Nullable titleLabel SWIFT_DEPRECATED_OBJC("Swift property 'BCBubbleCellView.titleLabel' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// Weight label on bubble cell. If cell’s style does not have weight label style, it has nil.
@property (nonatomic, readonly, strong) UILabel * _Nullable weightLabel SWIFT_DEPRECATED_OBJC("Swift property 'BCBubbleCellView.weightLabel' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// Detail label on bubble cell. If cell’s style does not have detail label style, it has nil.
@property (nonatomic, readonly, strong) UILabel * _Nullable detailTextLabel SWIFT_DEPRECATED_OBJC("Swift property 'BCBubbleCellView.detailTextLabel' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (void)layoutSubviews;
@property (nonatomic, readonly) UIDynamicItemCollisionBoundsType collisionBoundsType;
@property (nonatomic, readonly, strong) UIBezierPath * _Nonnull collisionBoundingPath;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@protocol BCBubbleContainerViewDataSource;
@protocol BCBubbleContainerViewDelegate;

/// This view contains cell views.
SWIFT_CLASS("_TtC15BeastComponents21BCBubbleContainerView")
@interface BCBubbleContainerView : UIView
/// Data source for the bubble container view to ask.
@property (nonatomic, weak) id <BCBubbleContainerViewDataSource> _Nullable dataSource SWIFT_DEPRECATED_OBJC("Swift property 'BCBubbleContainerView.dataSource' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// Delegate for the bubble container view to notify.
@property (nonatomic, weak) id <BCBubbleContainerViewDelegate> _Nullable delegate SWIFT_DEPRECATED_OBJC("Swift property 'BCBubbleContainerView.delegate' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// Minimum square size (in points) of cell
/// Default is 30 points.
@property (nonatomic) CGFloat minimumCellSize SWIFT_DEPRECATED_OBJC("Swift property 'BCBubbleContainerView.minimumCellSize' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// Maximum square size (in points) of cell
/// Default is 300 points.
@property (nonatomic) CGFloat maximumCellSize SWIFT_DEPRECATED_OBJC("Swift property 'BCBubbleContainerView.maximumCellSize' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// Array of cell views
@property (nonatomic, readonly, copy) NSArray<BCBubbleCellView *> * _Nonnull cells SWIFT_DEPRECATED_OBJC("Swift property 'BCBubbleContainerView.cells' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// Set data source to load data and construct bubble cells.
/// \param dataSource An object of data source for the bubble container view to ask.
///
- (void)loadDataFromDataSource:(id <BCBubbleContainerViewDataSource> _Nullable)dataSource andDelegate:(id <BCBubbleContainerViewDelegate> _Nullable)delegate SWIFT_DEPRECATED_OBJC("Swift method 'BCBubbleContainerView.loadData(fromDataSource:andDelegate:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// It reloads and redraws all bubble cells.
- (void)reloadData SWIFT_DEPRECATED_OBJC("Swift method 'BCBubbleContainerView.reloadData()' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// It redraws all bubble cells without loading data source.
- (void)redrawWithChangeCellStyle:(BOOL)changeCellStyle SWIFT_DEPRECATED_OBJC("Swift method 'BCBubbleContainerView.redraw(changeCellStyle:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (void)layoutSubviews;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIImage;

/// Data source for bubble container view
SWIFT_PROTOCOL("_TtP15BeastComponents31BCBubbleContainerViewDataSource_")
@protocol BCBubbleContainerViewDataSource
/// Asks the data source for the number of bubbles in the container view.
/// \param bubbleContainerView The container-view object requesting this information.
///
///
/// returns:
/// The number of bubbles in containerView.
- (NSInteger)numberOfBubblesIn:(BCBubbleContainerView * _Nonnull)bubbleContainerView SWIFT_WARN_UNUSED_RESULT;
/// Asks the data source for the weight to use for a particular bubble cell.
/// Weight of a bubble affects the bubble size.
/// \param bubbleContainerView The container-view object requesting this information.
///
/// \param index An index that locates a bubble in containerView.
///
///
/// returns:
/// A nonnegative floating-point value that specifies the weight that bubble should be.
- (double)bubbleContainerView:(BCBubbleContainerView * _Nonnull)bubbleContainerView weightForIndexAt:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
@optional
/// Asks the data source for the title to view on a particular bubble cell.
/// Title does not appear if the cell’s style isnoLabel or onlyWeightLabel.
/// \param bubbleContainerView The container-view object requesting this information.
///
/// \param index An index that locates a bubble in containerView.
///
///
/// returns:
/// A string value that specifies the title that bubble should view.
- (NSString * _Nullable)bubbleContainerView:(BCBubbleContainerView * _Nonnull)bubbleContainerView titleForIndexAt:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
/// Asks the data source for the detail text to view on a particular bubble cell.
/// Detail text appears only if the cell’s style titleAndDetailLabel, weightAndDetailLabel or titleAndWeightAndDetailLabel.
/// \param bubbleContainerView The container-view object requesting this information.
///
/// \param index An index that locates a bubble in containerView.
///
///
/// returns:
/// A string value that specifies the detail text that bubble should view.
- (NSString * _Nullable)bubbleContainerView:(BCBubbleContainerView * _Nonnull)bubbleContainerView detailTextForIndexAt:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
/// Asks the data source for the background image to view on a particular bubble cell.
/// \param bubbleContainerView The container-view object requesting this information.
///
/// \param index An index that locates a bubble in containerView.
///
///
/// returns:
/// An UIImage to view on the background of bubble cell.
- (UIImage * _Nullable)bubbleContainerView:(BCBubbleContainerView * _Nonnull)bubbleContainerView backgroundImageForIndexAt:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
@end


/// Delegate for bubble container view
SWIFT_PROTOCOL("_TtP15BeastComponents29BCBubbleContainerViewDelegate_")
@protocol BCBubbleContainerViewDelegate
@optional
/// Notify when a bubble cell has been created and added.
/// \param bubbleContainerView The container-view object that notification is sent from.
///
/// \param bubbleCellView An BCBubbleCellView object that is creasted and added.
///
/// \param index The index that locates a bubble in containerView.
///
- (void)bubbleContainerView:(BCBubbleContainerView * _Nonnull)bubbleContainerView didCreateBubbleCellView:(BCBubbleCellView * _Nonnull)bubbleCellView forIndexAt:(NSInteger)index;
@end


SWIFT_CLASS("_TtC15BeastComponents18BCCoverContentView")
@interface BCCoverContentView : UIView
/// Initializes a cover-content view with a reuse identifier and returns it to the caller.
/// \param reuseIdentifier A string used to identify the cover-content view object. You should use the same reuse identifier for all cells of the same form.
///
- (nonnull instancetype)initWithReuseIdentifier:(NSString * _Nonnull)reuseIdentifier OBJC_DESIGNATED_INITIALIZER SWIFT_DEPRECATED_OBJC("Swift initializer 'BCCoverContentView.init(reuseIdentifier:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
/// Prepares a reusable cover-content view for reuse by the cover-flow view’s delegate.
/// If a BCCoverContentView object is reusable—that is, it has a reuse identifier—this method is invoked just before the object is returned from the BCCoverFlowView method dequeueReusableCoverContentView(withIdentifier:for:). For performance reasons, you should only reset attributes of the cover that are not related to content. The table view’s delegate in coverFlowView(_:contentAt:) should always reset all content when reusing a cover-content view. If the cover-content view object does not have an associated reuse identifier, this method is not called. If you override this method, you must be sure to invoke the superclass implementation.
- (void)prepareForReuse SWIFT_DEPRECATED_OBJC("Swift method 'BCCoverContentView.prepareForReuse()' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic, readonly, copy) NSString * _Nullable reuseIdentifier SWIFT_DEPRECATED_OBJC("Swift property 'BCCoverContentView.reuseIdentifier' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end

@protocol BCCoverFlowViewDataSource;
@class UIColor;
@class BCCoverFlowViewPresentDetailAnimationController;
@class UINib;
@class UITouch;
@class UIEvent;

/// View has covers are flowing through.
SWIFT_CLASS("_TtC15BeastComponents15BCCoverFlowView")
@interface BCCoverFlowView : UIScrollView <UIScrollViewDelegate>
/// Data source for the cover-flow container view to ask.
@property (nonatomic, weak) id <BCCoverFlowViewDataSource> _Nullable dataSource SWIFT_DEPRECATED_OBJC("Swift property 'BCCoverFlowView.dataSource' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic, weak) id <UIScrollViewDelegate> _Nullable delegate;
/// Number of presenting covers on cover flow view.
/// The default is 5 covers.
@property (nonatomic) NSInteger numberOfPresentingCovers SWIFT_DEPRECATED_OBJC("Swift property 'BCCoverFlowView.numberOfPresentingCovers' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// Height of area for stacked to appear beyond the most top cover.
/// If this valus is less then 1.0, the height will be pixwls of the ratio of the cover-flow view’s height. Otherwise, it will use the value as pixels. The default is 0.2.
@property (nonatomic) CGFloat heightOfAreaBeyondTopCover SWIFT_DEPRECATED_OBJC("Swift property 'BCCoverFlowView.heightOfAreaBeyondTopCover' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// Color for stream gradience.
/// The default is black with 0.5 alpha. Assign clear color if you don’t want gradient stream.
@property (nonatomic, strong) UIColor * _Nonnull gradientColorForStream SWIFT_DEPRECATED_OBJC("Swift property 'BCCoverFlowView.gradientColorForStream' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// Height of area for a just passed over cover.
@property (nonatomic) CGFloat heightOverPassed SWIFT_DEPRECATED_OBJC("Swift property 'BCCoverFlowView.heightOverPassed' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic) BOOL isContinuousSideBySide SWIFT_DEPRECATED_OBJC("Swift property 'BCCoverFlowView.isContinuousSideBySide' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic) CGFloat additionalCoverHeightForSideBySide SWIFT_DEPRECATED_OBJC("Swift property 'BCCoverFlowView.additionalCoverHeightForSideBySide' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic, readonly, strong) BCCoverContentView * _Nullable topCoverContentView SWIFT_DEPRECATED_OBJC("Swift property 'BCCoverFlowView.topCoverContentView' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic, strong) BCCoverFlowViewPresentDetailAnimationController * _Nonnull presentDetailAnimationController SWIFT_DEPRECATED_OBJC("Swift property 'BCCoverFlowView.presentDetailAnimationController' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
/// Registers a nib object containing a cover content view with the cover flow view under a specified identifier.
/// Prior to dequeueing any cover views, call this method or the register(class:forCellReuseIdentifier:) method to tell the cover floaw view how to create new cover content viws. If a cell of the specified type is not currently in a reuse queue, the cover flow view uses the provided information to create an empty view.
/// If you previously registered a class or nib file with the same reuse identifier, the nib you specify in the coverNib parameter replaces the old entry. You may specify nil for coverNib if you want to unregister the nib from the specified reuse identifier.
/// \param coverNib A nib object that specifies the nib file to use to create the cover content view.
///
/// \param identifier The reuse identifier for the ccover. This parameter must not be nil and must not be an empty string.
///
- (void)registerWithNib:(UINib * _Nullable)coverNib forCoverReuseIdentifier:(NSString * _Nonnull)identifier SWIFT_DEPRECATED_OBJC("Swift method 'BCCoverFlowView.register(nib:forCoverReuseIdentifier:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// Registers a class for use in creating new cover content views.
/// Prior to dequeueing any cover views, call this method or the register(nib:forCellReuseIdentifier:) method to tell the cover floaw view how to create new cover content viws. If a cell of the specified type is not currently in a reuse queue, the cover flow view uses the provided information to create an empty view.
/// If you previously registered a class or nib file with the same reuse identifier, the class you specify in the coverClass parameter replaces the old entry. You may specify nil for coverClass if you want to unregister the class from the specified reuse identifier.
/// \param coverClass The class of a cover content view that you want to use in the cover flow view.
///
/// \param identifier The reuse identifier for the ccover. This parameter must not be nil and must not be an empty string.
///
- (void)registerWithClass:(Class _Nullable)coverClass forCoverReuseIdentifier:(NSString * _Nonnull)identifier SWIFT_DEPRECATED_OBJC("Swift method 'BCCoverFlowView.register(class:forCoverReuseIdentifier:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// Returns a reusable cover content view object for the specified reuse identifier and adds it to the cover flow view.
/// For performance reasons, a cover-flow view’s data source should generally reuse BCCoverContentView objects when it assigns cover-content views to stream in its coverFlowView(_:contentAt:) method. A cover-flow view maintains a queue or list of BCCoverContentView objects that the data source has marked for reuse. Call this method from your data source object when asked to provide a new content for the cover-flow view. This method dequeues an existing cover content if one is available, or creates a new one based on the class or nib file you previously registered, and adds it to the cover-flow view.
/// important:
/// You must register a class or nib file using the register(class:forCoverReuseIdentifier:) or register(nib:forCoverReuseIdentifier:) method before calling this method.
/// If you registered a class for the specified identifier and a new cover content must be created, this method initializes the cell by calling its init(reuseIdentifier:) method. For nib-based covers, this method loads the cover-content view object from the provided nib file. If an existing cover-content view was available for reuse, this method calls the cover’s prepareForReuse() method instead.
/// \param identifier A string identifying the cover-content object to be reused. This parameter must not be nil.
///
/// \param index The index specifying the location of the cover. The data source receives this information when it is asked for the cover and should just pass it along. This method uses the index path to perform additional configuration based on the cover’s position in the cover-flow view.
///
///
/// returns:
/// A BCCoverContentView object with the associated reuse identifier. This method always returns a valid cover-content view.
- (BCCoverContentView * _Nonnull)dequeueReusableCoverContentViewWithIdentifier:(NSString * _Nonnull)identifier for:(NSInteger)index SWIFT_WARN_UNUSED_RESULT SWIFT_DEPRECATED_OBJC("Swift method 'BCCoverFlowView.dequeueReusableCoverContentView(withIdentifier:for:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// Returns the cover-content view at the specified index.
/// \param index The index locating the row in the table view.
///
///
/// returns:
/// An object representing a cover-content view of the cover flow view, or nil if the cover-content view is not visible or index is out of range.
- (BCCoverContentView * _Nullable)coverContentViewFor:(NSInteger)index SWIFT_WARN_UNUSED_RESULT SWIFT_DEPRECATED_OBJC("Swift method 'BCCoverFlowView.coverContentView(for:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// Reloads the stream covers of the cover-flow view.
/// Call this method to reload all the data that is used to construct the stream of covers. For efficiency, the cover-flow view redisplays only those cover contents that are visible. It adjusts offsets if the cover-flow view shrinks as a result of the reload. The cover-flow view’s delegate or data source calls this method when it wants the cover-flow view to completely reload its data.
- (void)reloadData SWIFT_DEPRECATED_OBJC("Swift method 'BCCoverFlowView.reloadData()' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// Scrolls through the cover-flow view until a cover content identified by index is at a particular location on the screen.
/// \param index An index that identifies a cover content in the cover-flow view by its cover index.
///
/// \param animated true if you want to animate the change in position; false if it should be immediate.
///
- (void)scrollToCoverContentAt:(NSInteger)index animated:(BOOL)animated SWIFT_DEPRECATED_OBJC("Swift method 'BCCoverFlowView.scrollToCoverContent(at:animated:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (void)layoutSubviews;
@property (nonatomic) CGPoint contentOffset;
- (void)touchesBegan:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesMoved:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesEnded:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesCancelled:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)scrollViewWillBeginDragging:(UIScrollView * _Nonnull)scrollView;
- (void)scrollViewDidEndDecelerating:(UIScrollView * _Nonnull)scrollView;
- (void)scrollViewDidEndDragging:(UIScrollView * _Nonnull)scrollView willDecelerate:(BOOL)decelerate;
- (void)scrollViewWillEndDragging:(UIScrollView * _Nonnull)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(CGPoint * _Nonnull)targetContentOffset;
- (void)scrollViewDidEndScrollingAnimation:(UIScrollView * _Nonnull)scrollView;
- (BOOL)scrollViewShouldScrollToTop:(UIScrollView * _Nonnull)scrollView SWIFT_WARN_UNUSED_RESULT;
@end


/// Data source for cover flow view
SWIFT_PROTOCOL("_TtP15BeastComponents25BCCoverFlowViewDataSource_")
@protocol BCCoverFlowViewDataSource
/// Asks the data source for the number of covers in the view.
/// \param coverFlowView The cover-flow view object requesting this information.
///
///
/// returns:
/// The number of covwes in coverFlowView.
- (NSInteger)numberOfCoversIn:(BCCoverFlowView * _Nonnull)coverFlowView SWIFT_WARN_UNUSED_RESULT;
/// Asks the data source for a cover-content view to insert in a particular location of the cover flow view.
/// The returned BCCoverContentView object is frequently one that the application reuses for performance reasons. You should fetch a previously created cell object that is marked for reuse by sending a dequeueReusableCoverContentView(withIdentifier:for:) message to coverFlowView.
/// \param coverFlowView The cover-flow view object requesting this information.
///
/// \param index An index locating a stream in coverFlowView.
///
///
/// returns:
/// An object inheriting from BCCoverContentView that the cover-flow view can use for the stream.
- (BCCoverContentView * _Nonnull)coverFlowView:(BCCoverFlowView * _Nonnull)coverFlowView contentAt:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
@end


/// Delegate for bubble container view
SWIFT_PROTOCOL("_TtP15BeastComponents23BCCoverFlowViewDelegate_")
@protocol BCCoverFlowViewDelegate <UIScrollViewDelegate>
@optional
/// Tells the delegate that the top cover content view was updated from the cover-flow view.
/// \param coverFlowView A cover-flow view object informing the delegate about the cover view scale depending on scroll.
///
/// \param index An index locating a stream in coverFlowView.
///
/// \param scale Scale of scroll distance from vertical standard.
///
- (void)coverFlowView:(BCCoverFlowView * _Nonnull)coverFlowView didUpdateTopCoverContentViewIndex:(NSInteger)index scrollScale:(CGFloat)scale;
/// Tells the delegate that the specified row is now selected.
/// \param coverFlowView A cover-flow view object informing the delegate about the new row selection.
///
/// \param index An index locating a stream in coverFlowView.
///
- (void)coverFlowView:(BCCoverFlowView * _Nonnull)coverFlowView didSelectCoverViewAtIndex:(NSInteger)index;
@end

@protocol UIViewControllerContextTransitioning;

SWIFT_CLASS("_TtC15BeastComponents47BCCoverFlowViewPresentDetailAnimationController")
@interface BCCoverFlowViewPresentDetailAnimationController : NSObject <UIViewControllerAnimatedTransitioning>
@property (nonatomic, copy) void (^ _Nullable customizedAnimation)(BOOL) SWIFT_DEPRECATED_OBJC("Swift property 'BCCoverFlowViewPresentDetailAnimationController.customizedAnimation' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// Provides zoon-in transition for presenting detail view controller.
@property (nonatomic, readonly, strong) BCCoverFlowViewPresentDetailAnimationController * _Nonnull zoomIn SWIFT_DEPRECATED_OBJC("Swift property 'BCCoverFlowViewPresentDetailAnimationController.zoomIn' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// Provides zoon-out transition for presenting detail view controller.
@property (nonatomic, readonly, strong) BCCoverFlowViewPresentDetailAnimationController * _Nonnull zoomOut SWIFT_DEPRECATED_OBJC("Swift property 'BCCoverFlowViewPresentDetailAnimationController.zoomOut' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// Provides zoon-in and flip-left-to-right transition for presenting detail view controller.
@property (nonatomic, readonly, strong) BCCoverFlowViewPresentDetailAnimationController * _Nonnull zoomInAndFlipRight SWIFT_DEPRECATED_OBJC("Swift property 'BCCoverFlowViewPresentDetailAnimationController.zoomInAndFlipRight' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// Provides zoon-in and flip-right-to-left  transition for presenting detail view controller.
@property (nonatomic, readonly, strong) BCCoverFlowViewPresentDetailAnimationController * _Nonnull zoomOutAndFlipLeft SWIFT_DEPRECATED_OBJC("Swift property 'BCCoverFlowViewPresentDetailAnimationController.zoomOutAndFlipLeft' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (NSTimeInterval)transitionDuration:(id <UIViewControllerContextTransitioning> _Nullable)transitionContext SWIFT_WARN_UNUSED_RESULT;
- (void)animateTransition:(id <UIViewControllerContextTransitioning> _Nonnull)transitionContext;
- (void)animateZoomInTransitionUsing:(id <UIViewControllerContextTransitioning> _Nonnull)transitionContext SWIFT_DEPRECATED_OBJC("Swift method 'BCCoverFlowViewPresentDetailAnimationController.animateZoomInTransition(using:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (void)animateZoomOutTransitionUsing:(id <UIViewControllerContextTransitioning> _Nonnull)transitionContext SWIFT_DEPRECATED_OBJC("Swift method 'BCCoverFlowViewPresentDetailAnimationController.animateZoomOutTransition(using:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (void)animateZoomAndFlipTransitionUsing:(id <UIViewControllerContextTransitioning> _Nonnull)transitionContext SWIFT_DEPRECATED_OBJC("Swift method 'BCCoverFlowViewPresentDetailAnimationController.animateZoomAndFlipTransition(using:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC15BeastComponents13BCProgressBar")
@interface BCProgressBar : UIView
@property (nonatomic) float progress SWIFT_DEPRECATED_OBJC("Swift property 'BCProgressBar.progress' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic, strong) UIColor * _Nullable progressColor SWIFT_DEPRECATED_OBJC("Swift property 'BCProgressBar.progressColor' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic, strong) UIColor * _Nullable maskBackgroundColor SWIFT_DEPRECATED_OBJC("Swift property 'BCProgressBar.maskBackgroundColor' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic) float animationSpeed SWIFT_DEPRECATED_OBJC("Swift property 'BCProgressBar.animationSpeed' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)setProgress:(float)progress animated:(BOOL)animated SWIFT_DEPRECATED_OBJC("Swift method 'BCProgressBar.setProgress(_:animated:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (void)layoutSubviews;
@end


SWIFT_CLASS("_TtC15BeastComponents11BCRatingBar")
@interface BCRatingBar : UIView
@property (nonatomic) NSInteger numberOfStars SWIFT_DEPRECATED_OBJC("Swift property 'BCRatingBar.numberOfStars' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic) CGFloat spaceBetweenStars SWIFT_DEPRECATED_OBJC("Swift property 'BCRatingBar.spaceBetweenStars' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic, strong) UIColor * _Nonnull trackTintColor SWIFT_DEPRECATED_OBJC("Swift property 'BCRatingBar.trackTintColor' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutSubviews;
@property (nonatomic, strong) UIColor * _Nullable backgroundColor;
@property (nonatomic, strong) UIColor * _Null_unspecified ratingTintColor SWIFT_DEPRECATED_OBJC("Swift property 'BCRatingBar.ratingTintColor' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic, strong) UIImage * _Nullable ratingBackgroundImage SWIFT_DEPRECATED_OBJC("Swift property 'BCRatingBar.ratingBackgroundImage' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic) float internalRate SWIFT_DEPRECATED_OBJC("Swift property 'BCRatingBar.internalRate' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic) float rate SWIFT_DEPRECATED_OBJC("Swift property 'BCRatingBar.rate' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (void)setRate:(float)rate animated:(BOOL)animated SWIFT_DEPRECATED_OBJC("Swift method 'BCRatingBar.setRate(_:animated:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@end



#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif
