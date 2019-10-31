// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class ColumnMajorUniformToLargestGridLayoutProperties
{
public:
    ColumnMajorUniformToLargestGridLayoutProperties();

    void ColumnSpacing(int value);
    int ColumnSpacing();

    void MaximumColumns(int value);
    int MaximumColumns();

    void RowSpacing(int value);
    int RowSpacing();

    static winrt::DependencyProperty ColumnSpacingProperty() { return s_ColumnSpacingProperty; }
    static winrt::DependencyProperty MaximumColumnsProperty() { return s_MaximumColumnsProperty; }
    static winrt::DependencyProperty RowSpacingProperty() { return s_RowSpacingProperty; }

    static GlobalDependencyProperty s_ColumnSpacingProperty;
    static GlobalDependencyProperty s_MaximumColumnsProperty;
    static GlobalDependencyProperty s_RowSpacingProperty;

    static void EnsureProperties();
    static void ClearProperties();

    static void OnColumnSpacingPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnMaximumColumnsPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnRowSpacingPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);
};